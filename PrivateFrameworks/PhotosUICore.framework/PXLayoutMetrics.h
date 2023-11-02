
@interface PXLayoutMetrics : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
}

@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)diagnosticDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;

@end
