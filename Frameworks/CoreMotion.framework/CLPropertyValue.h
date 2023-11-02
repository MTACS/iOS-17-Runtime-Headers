
@interface CLPropertyValue : NSObject {
    bool  _dirty;
    id  _value;
}

@property (nonatomic) bool dirty;
@property (nonatomic, readonly, retain) id value;

- (void)dealloc;
- (bool)dirty;
- (id)initWithValue:(id)arg1 dirty:(bool)arg2;
- (void)setDirty:(bool)arg1;
- (id)value;

@end
