
@interface DIShadowChain : NSObject <NSCoding, NSSecureCoding> {
    NSMutableArray * _nodes;
    NSArray * _shadowStats;
    bool  _shouldValidate;
}

@property (nonatomic, readonly) NSURL *activeURL;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) NSArray *mountPoints;
@property (nonatomic, readonly) NSMutableArray *nodes;
@property (nonatomic, readonly) NSArray *shadowStats;
@property (nonatomic) bool shouldValidate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeURL;
- (bool)addShadowNodes:(id)arg1 error:(id*)arg2;
- (bool)addShadowURLs:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)mountPoints;
- (id)nodes;
- (void)openWritable:(bool)arg1 createNonExisting:(bool)arg2;
- (void)setShouldValidate:(bool)arg1;
- (id)shadowStats;
- (bool)shouldValidate;
- (id)statWithError:(id*)arg1;

@end
