
@interface _FPLocationAgnosticID : NSObject {
    FPItemID * _alternateID;
    FPItemID * _itemID;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
