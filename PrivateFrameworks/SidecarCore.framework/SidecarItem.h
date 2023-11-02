
@interface SidecarItem : NSObject {
    NSData * _data;
    NSString * _type;
}

@property (readonly) NSData *data;
@property (readonly, copy) id objectValue;
@property (readonly) NSString *type;
@property (readonly) UTType *uniformType;

- (void).cxx_destruct;
- (bool)conformsToType:(id)arg1;
- (id)data;
- (id)debugDescription;
- (id)description;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (id)initWithObject:(id)arg1 type:(id)arg2;
- (id)objectValue;
- (id)type;
- (id)uniformType;

@end
