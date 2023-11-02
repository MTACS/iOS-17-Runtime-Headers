
@interface SHMediaLibraryQueryParameters : NSObject <NSCopying, NSSecureCoding> {
    bool  _ascending;
    unsigned long long  _filterOptions;
    NSString * _providerIdentifier;
    long long  _resultsLimit;
    bool  _shouldUpdate;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly) unsigned long long filterOptions;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic, readonly) long long resultsLimit;
@property (nonatomic, readonly) bool shouldUpdate;

+ (id)defaultParameters;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (void)commonInitWithResultsLimit:(long long)arg1 filterOptions:(unsigned long long)arg2 ascending:(bool)arg3 shouldUpdate:(bool)arg4 providerIdentifier:(id)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterOptions;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultsLimit:(long long)arg1;
- (id)initWithResultsLimit:(long long)arg1 filterOptions:(unsigned long long)arg2;
- (id)initWithResultsLimit:(long long)arg1 filterOptions:(unsigned long long)arg2 ascending:(bool)arg3;
- (id)initWithResultsLimit:(long long)arg1 filterOptions:(unsigned long long)arg2 ascending:(bool)arg3 providerIdentifier:(id)arg4;
- (id)initWithResultsLimit:(long long)arg1 filterOptions:(unsigned long long)arg2 ascending:(bool)arg3 shouldUpdate:(bool)arg4;
- (id)initWithResultsLimit:(long long)arg1 filterOptions:(unsigned long long)arg2 ascending:(bool)arg3 shouldUpdate:(bool)arg4 providerIdentifier:(id)arg5;
- (id)providerIdentifier;
- (long long)resultsLimit;
- (bool)shouldUpdate;
- (bool)validateLimit:(long long)arg1;

@end
