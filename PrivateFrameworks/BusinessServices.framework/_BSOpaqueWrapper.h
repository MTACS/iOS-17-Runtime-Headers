
@interface _BSOpaqueWrapper : NSObject {
    void wrappedThing;
}

@property (nonatomic, readonly) id wrappedThing;

- (void).cxx_destruct;
- (id)init;
- (id)init:(id)arg1;
- (id)wrappedThing;

@end
