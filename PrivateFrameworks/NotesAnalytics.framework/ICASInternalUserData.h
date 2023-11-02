
@interface ICASInternalUserData : NSObject <AADataEventType> {
    NSString * _rawUserDSID;
}

@property (nonatomic, readonly) NSString *rawUserDSID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithRawUserDSID:(id)arg1;
- (id)rawUserDSID;
- (id)toDict;

@end
