
@interface BSOpaqueWrapper : NSObject {
    _BSOpaqueWrapper * _opaqueWrapper;
}

@property (nonatomic, readonly, retain) id wrappedThing;

+ (id)wrapperFor:(id)arg1;

- (void).cxx_destruct;
- (id)initWithThing:(id)arg1;
- (id)wrappedThing;

@end
