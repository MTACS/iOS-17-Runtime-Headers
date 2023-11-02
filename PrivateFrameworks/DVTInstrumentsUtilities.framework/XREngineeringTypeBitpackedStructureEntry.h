
@interface XREngineeringTypeBitpackedStructureEntry : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _bitRange;
    NSString * _type;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } bitRange;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })bitRange;
- (void)setBitRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
