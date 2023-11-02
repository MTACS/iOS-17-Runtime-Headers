
@interface DelaunayPoint : NSObject {
    void _value;
}

@property (readonly) void value;

- (id)initWithValue;
- (void)value;

@end
