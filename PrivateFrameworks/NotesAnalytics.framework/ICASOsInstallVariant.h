
@interface ICASOsInstallVariant : NSObject <AADataType> {
    long long  _osInstallVariant;
}

@property (nonatomic, readonly) long long osInstallVariant;

- (id)initWithOsInstallVariant:(long long)arg1;
- (long long)osInstallVariant;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
