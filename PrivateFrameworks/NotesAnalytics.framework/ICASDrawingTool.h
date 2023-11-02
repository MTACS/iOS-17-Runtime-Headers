
@interface ICASDrawingTool : NSObject <AADataType> {
    long long  _drawingTool;
}

@property (nonatomic, readonly) long long drawingTool;

- (long long)drawingTool;
- (id)initWithDrawingTool:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
