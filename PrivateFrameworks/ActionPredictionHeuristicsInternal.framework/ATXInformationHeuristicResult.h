
@interface ATXInformationHeuristicResult : NSObject <NSSecureCoding> {
    bool  _hasFailed;
    NSString * _heuristicName;
    NSSet * _refreshTriggers;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) bool hasFailed;
@property (nonatomic, readonly) NSString *heuristicName;
@property (nonatomic, readonly) NSSet *refreshTriggers;
@property (nonatomic, readonly) NSArray *suggestions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_safeDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(bool)arg4;
- (id)_safeDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(bool)arg4;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasFailed;
- (id)heuristicName;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeuristicName:(id)arg1 suggestions:(id)arg2 refreshTriggers:(id)arg3 hasFailed:(bool)arg4;
- (id)refreshTriggers;
- (id)suggestions;

@end
