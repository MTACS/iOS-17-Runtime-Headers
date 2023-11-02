
@interface PRLexiconCorrectionCursor : NSObject {
    unsigned long long  _advancementLength;
    struct _LXCursor { } * _cursor;
    unsigned long long  _deletionsCount;
    unsigned long long  _insertionsCount;
    unsigned long long  _replacementsCount;
    unsigned long long  _transpositionsCount;
}

@property (readonly) unsigned long long advancementLength;
@property (readonly) struct _LXCursor { }*cursor;
@property (readonly) unsigned long long deletionsCount;
@property (readonly) unsigned long long errorType;
@property (readonly) unsigned long long insertionsCount;
@property (readonly) double prefixProbability;
@property (readonly) unsigned long long replacementsCount;
@property (readonly) unsigned long long totalEdits;
@property (readonly) unsigned long long transpositionsCount;

- (unsigned long long)advancementLength;
- (struct _LXCursor { }*)cursor;
- (void)dealloc;
- (unsigned long long)deletionsCount;
- (id)description;
- (unsigned long long)errorType;
- (id)initWithCursor:(struct _LXCursor { }*)arg1 replacementsCount:(unsigned long long)arg2 insertionsCount:(unsigned long long)arg3 deletionsCount:(unsigned long long)arg4 transpositionsCount:(unsigned long long)arg5 advancementLength:(unsigned long long)arg6;
- (unsigned long long)insertionsCount;
- (double)prefixProbability;
- (unsigned long long)replacementsCount;
- (unsigned long long)totalEdits;
- (unsigned long long)transpositionsCount;

@end
