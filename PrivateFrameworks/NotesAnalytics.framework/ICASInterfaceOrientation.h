
@interface ICASInterfaceOrientation : NSObject <AADataType> {
    long long  _interfaceOrientation;
}

@property (nonatomic, readonly) long long interfaceOrientation;

- (id)initWithInterfaceOrientation:(long long)arg1;
- (long long)interfaceOrientation;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
