
@interface PLPersistentHistoryTransactionModifiers : NSObject {
    int  _changeSource;
    bool  _nonCoalescing;
    bool  _syncChangeMarker;
}

@property (nonatomic) int changeSource;
@property (nonatomic, readonly) bool isSyncable;
@property (nonatomic) bool nonCoalescing;
@property (nonatomic) bool syncChangeMarker;

+ (id)transactionAuthorFromChangeSource:(int)arg1;
+ (id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(bool)arg2;
+ (id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(bool)arg2 nonCoalescing:(bool)arg3;
+ (id)transactionModifiersFromTransactionAuthor:(id)arg1;

- (id)_descriptionWithBuilder:(id)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (int)changeSource;
- (id)description;
- (id)encodeAsTransactionAuthor;
- (id)init;
- (id)initWithChangeSource:(int)arg1 syncChangeMarker:(bool)arg2 nonCoalescing:(bool)arg3;
- (bool)isNonCoalescing;
- (bool)isSyncable;
- (bool)nonCoalescing;
- (void)setChangeSource:(int)arg1;
- (void)setNonCoalescing:(bool)arg1;
- (void)setSyncChangeMarker:(bool)arg1;
- (bool)syncChangeMarker;
- (bool)updateFromTransactionAuthor:(id)arg1;

@end
