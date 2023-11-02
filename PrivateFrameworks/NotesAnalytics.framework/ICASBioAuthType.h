
@interface ICASBioAuthType : NSObject <AADataType> {
    long long  _bioAuthType;
}

@property (nonatomic, readonly) long long bioAuthType;

- (long long)bioAuthType;
- (id)initWithBioAuthType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
