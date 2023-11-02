
@interface APContext : NSObject <NSSecureCoding> {
    NSArray * _adjacent;
    APContentDepiction * _current;
    NSUUID * _identifier;
    struct { 
        double width; 
        double height; 
    }  _maxSize;
    NSDate * _prefetchTimestamp;
    NSString * _requestedAdIdentifier;
    NSDictionary * _supplementalContext;
}

@property (retain) NSArray *adjacent;
@property (retain) APContentDepiction *current;
@property (readonly) NSString *fingerprint;
@property (retain) NSUUID *identifier;
@property struct { double x1; double x2; } maxSize;
@property (retain) NSDate *prefetchTimestamp;
@property (retain) NSString *requestedAdIdentifier;
@property (retain) NSDictionary *supplementalContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjacent;
- (id)current;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerprint;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 maxSize:(struct { double x1; double x2; })arg2 requestedAdIdentifier:(id)arg3 currentContent:(id)arg4 adjacentContent:(id)arg5 supplementalContext:(id)arg6;
- (struct { double x1; double x2; })maxSize;
- (id)prefetchTimestamp;
- (id)requestedAdIdentifier;
- (void)setAdjacent:(id)arg1;
- (void)setCurrent:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaxSize:(struct { double x1; double x2; })arg1;
- (void)setPrefetchTimestamp:(id)arg1;
- (void)setRequestedAdIdentifier:(id)arg1;
- (void)setSupplementalContext:(id)arg1;
- (id)supplementalContext;

@end
