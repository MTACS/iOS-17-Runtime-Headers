
@interface FCTopicalEdge : NSObject {
    FCTopicalNode * _a;
    FCTopicalNode * _b;
    unsigned long long  _containsAAndB;
    unsigned long long  _containsAButNotB;
    unsigned long long  _containsBButNotA;
    bool  _relatednessCalculated;
}

@property (nonatomic, retain) FCTopicalNode *a;
@property (nonatomic, retain) FCTopicalNode *b;
@property (nonatomic) bool relatednessCalculated;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)relatednessCalculated;
- (void)setA:(id)arg1;
- (void)setB:(id)arg1;
- (void)setRelatednessCalculated:(bool)arg1;

@end
