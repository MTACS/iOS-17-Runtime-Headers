
@interface MXCallStackTree : NSObject <NSSecureCoding> {
    bool  _callStackPerThread;
    NSArray * _callStackThreads;
}

@property (readonly) bool callStackPerThread;
@property (readonly) NSArray *callStackThreads;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (bool)callStackPerThread;
- (id)callStackThreads;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreadArray:(id)arg1 aggregatedByProcess:(bool)arg2;
- (id)toDictionary;

@end
