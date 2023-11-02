
@interface ICASBioAuthData : NSObject <AADataEventType> {
    ICASBioAuthType * _bioAuthType;
}

@property (nonatomic, readonly) ICASBioAuthType *bioAuthType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)bioAuthType;
- (id)initWithBioAuthType:(id)arg1;
- (id)toDict;

@end
