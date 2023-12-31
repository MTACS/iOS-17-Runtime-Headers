
@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout> {
    <SXEdgeSpacing> * _margin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXEdgeSpacing> *margin;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMargin:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1;
- (id)margin;

@end
