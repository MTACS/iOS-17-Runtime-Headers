
@interface ICConstantAvailableTableWidthProvider : NSObject <ICAvailableTableWidthProviding> {
    double  _availableWidth;
}

@property (nonatomic) double availableWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)availableWidth;
- (void)setAvailableWidth:(double)arg1;

@end
