
@interface ICASStartMode : NSObject <AADataType> {
    long long  _startMode;
}

@property (nonatomic, readonly) long long startMode;

- (id)initWithStartMode:(long long)arg1;
- (long long)startMode;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
