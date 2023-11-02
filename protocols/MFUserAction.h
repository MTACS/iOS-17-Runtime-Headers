
@protocol MFUserAction

@required

- (NSString *)identifier;
- (NSDictionary *)options;
- (long long)source;
- (NSString *)sourceID;
- (<MFTimeStamp> *)timeStamp;
- (long long)type;

@end
