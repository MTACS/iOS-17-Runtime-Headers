
@interface ICASDrawingActionType : NSObject <AADataType> {
    long long  _drawingActionType;
}

@property (nonatomic, readonly) long long drawingActionType;

- (long long)drawingActionType;
- (id)initWithDrawingActionType:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
