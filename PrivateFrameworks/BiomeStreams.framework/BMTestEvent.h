
@interface BMTestEvent : BMEventBase <BMStoreData, NSSecureCoding> {
    struct { 
        unsigned int dataVersion; 
        unsigned int content; 
    }  _data;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (bool)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned int)content;
- (unsigned int)dataVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(unsigned int)arg1 dataVersion:(unsigned int)arg2;
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (id)serialize;

@end
