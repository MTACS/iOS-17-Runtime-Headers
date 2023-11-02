
@interface PSIGroupResultGroupSnapshot : NSObject {
    short  _category;
    NSString * _contentString;
    PSIDateFilter * _dateFilter;
    NSArray * _datedTokens;
    unsigned long long  _groupId;
    NSArray * _groupRanges;
    NSString * _lookupIdentifier;
    NSMutableArray * _matchRanges;
    NSString * _normalizedString;
    unsigned long long  _owningGroupId;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) short category;
@property (nonatomic, readonly, copy) NSString *contentString;
@property (nonatomic, readonly, copy) PSIDateFilter *dateFilter;
@property (nonatomic, readonly) NSArray *datedTokens;
@property (nonatomic, readonly) unsigned long long groupId;
@property (nonatomic, readonly) NSArray *groupRanges;
@property (nonatomic, readonly, copy) NSString *lookupIdentifier;
@property (nonatomic, readonly) NSArray *matchRanges;
@property (nonatomic, readonly, copy) NSString *normalizedString;
@property (nonatomic, readonly) unsigned long long owningGroupId;
@property (nonatomic, readonly) NSArray *tokens;

- (void).cxx_destruct;
- (void)addMatchRange:(id)arg1;
- (void)addToken:(id)arg1;
- (short)category;
- (id)contentString;
- (id)dateFilter;
- (id)datedTokens;
- (unsigned long long)groupId;
- (id)groupRanges;
- (id)initWithContentString:(id)arg1 lookupIdentifier:(id)arg2 category:(short)arg3;
- (id)initWithContentString:(id)arg1 normalizedString:(id)arg2 token:(id)arg3 category:(short)arg4 lookupIdentifier:(id)arg5 dateFilter:(id)arg6 groupId:(unsigned long long)arg7 owningGroupId:(unsigned long long)arg8 groupRanges:(id)arg9 datedTokens:(id)arg10;
- (id)initWithDateFilter:(id)arg1 datedTokens:(id)arg2;
- (id)initWithGroup:(id)arg1 token:(id)arg2;
- (bool)isDateFilterFromFullSearchText;
- (bool)isDateFilterFromImplicitToken;
- (bool)isDateFilterPartiallyFromFullSearchText;
- (id)lookupIdentifier;
- (id)matchRanges;
- (id)normalizedString;
- (unsigned long long)owningGroupId;
- (id)tokens;

@end
