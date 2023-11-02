
@interface BAAppStoreProgressInfoDescriptor : NSObject <BAAppStoreProgressInfo, NSSecureCoding> {
    long long  _countOfBytesExpectedToReceive;
    long long  _countOfBytesReceived;
    long long  _progressState;
}

@property (nonatomic, readonly) long long countOfBytesExpectedToReceive;
@property (nonatomic, readonly) long long countOfBytesReceived;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long progressState;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesReceived;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)progressState;

@end
