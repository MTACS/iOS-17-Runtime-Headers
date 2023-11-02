
@interface CLSAbstractSurveyStep : CLSObject {
    long long  _type;
    long long  _version;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long version;

- (long long)type;
- (long long)version;

@end
