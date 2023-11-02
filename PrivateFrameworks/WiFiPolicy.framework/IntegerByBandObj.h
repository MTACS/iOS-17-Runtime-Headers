
@interface IntegerByBandObj : NSObject <NSCopying> {
    struct { 
        long long valueByBand[3]; 
        bool valid[3]; 
    }  _candidateSet;
}

@property (nonatomic) struct { long long x1[3]; bool x2[3]; } candidateSet;

+ (id)integerByBandWith:(struct { long long x1[3]; bool x2[3]; })arg1;
+ (id)integerByBandWith:(struct { long long x1[3]; bool x2[3]; })arg1 withCap:(bool)arg2;

- (struct { long long x1[3]; bool x2[3]; })candidateSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCandidateSet:(struct { long long x1[3]; bool x2[3]; })arg1;

@end
