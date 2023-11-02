
@interface AXProfileTransaction : NSObject {
    long long  _attribute;
    struct __AXUIElement { } * _element;
    double  _start;
}

@property (nonatomic) long long attribute;
@property (nonatomic) struct __AXUIElement { }*element;
@property (nonatomic) double start;

- (long long)attribute;
- (struct __AXUIElement { }*)element;
- (void)setAttribute:(long long)arg1;
- (void)setElement:(struct __AXUIElement { }*)arg1;
- (void)setStart:(double)arg1;
- (double)start;

@end
