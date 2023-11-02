
@interface ACFMessage : NSObject <ACFErrorReportingProtocol, ACFGeneralMessageProtocol> {
    NSMutableDictionary * _mutableInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)message;
+ (id)messageWithIdentifier:(id)arg1;
+ (id)messageWithInfo:(id)arg1;

- (void)clearError;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (long long)errorCode;
- (id)errorMessage;
- (id)identifier;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (id)mutableInfo;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)senderPortName;
- (int)senderProcessID;
- (id)senderProcessName;
- (void)setError:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setSenderPortName:(id)arg1;
- (void)setSenderProcessID:(int)arg1;
- (void)setSenderProcessName:(id)arg1;

@end
