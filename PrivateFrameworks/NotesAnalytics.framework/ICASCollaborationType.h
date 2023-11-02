
@interface ICASCollaborationType : NSObject <AADataType> {
    long long  _collaborationType;
}

@property (nonatomic, readonly) long long collaborationType;

- (long long)collaborationType;
- (id)initWithCollaborationType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
