
@interface _UICommandChildInserts : NSObject {
    NSArray * _afterElements;
    NSArray * _beforeElements;
}

@property (nonatomic, readonly) NSArray *afterElements;
@property (nonatomic, readonly) NSArray *beforeElements;

- (void).cxx_destruct;
- (void)_setBeforeElements:(id)arg1 afterElements:(id)arg2;
- (id)afterElements;
- (id)beforeElements;

@end
