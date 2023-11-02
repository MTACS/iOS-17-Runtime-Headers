
@interface IRServicePackageAdapterClassification : NSObject {
    NSString * _detailedDesc;
    bool  _isValid;
}

@property (nonatomic, retain) NSString *detailedDesc;
@property (nonatomic) bool isValid;

- (void).cxx_destruct;
- (id)detailedDesc;
- (id)init;
- (bool)isValid;
- (void)setDetailedDesc:(id)arg1;
- (void)setIsValid:(bool)arg1;

@end
