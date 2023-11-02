
@interface MIOModelLayer : NSObject {
    NSDictionary * _layerHistogram;
    NSString * _name;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *type;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMessageStream:(struct CodedInputStream { char *x1; char *x2; struct ZeroCopyInputStream {} *x3; int x4; int x5; unsigned int x6; bool x7; bool x8; int x9; int x10; int x11; int x12; int x13; bool x14; struct DescriptorPool {} *x15; struct MessageFactory {} *x16; }*)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 type:(id)arg2;
- (id)initWithName:(id)arg1 type:(id)arg2 histogram:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)layerHistogram;
- (id)name;
- (id)type;

@end
