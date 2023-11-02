
@interface ANSTHand : ANSTObject <NSSecureCoding> {
    long long  _chirality;
}

@property (nonatomic, readonly) long long chirality;

+ (id)new;
+ (bool)supportsSecureCoding;

- (long long)chirality;
- (id)debugJSONDictionary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAcObject:(struct { unsigned int x1; unsigned int x2; int x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; unsigned int x5; int x6; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(unsigned long long)arg1 groupID:(unsigned long long)arg2 category:(id)arg3 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 confidence:(unsigned long long)arg5;
- (id)initWithObjectID:(unsigned long long)arg1 groupID:(unsigned long long)arg2 category:(id)arg3 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 confidence:(unsigned long long)arg5 chirality:(long long)arg6;

@end
