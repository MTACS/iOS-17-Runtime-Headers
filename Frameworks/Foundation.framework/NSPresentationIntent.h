
@interface NSPresentationIntent : NSObject <NSCopying, NSSecureCoding> {
    long long  _column;
    NSArray * _columnAlignments;
    long long  _columnCount;
    long long  _headerLevel;
    long long  _identity;
    long long  _indentationLevel;
    long long  _intentKind;
    NSString * _languageHint;
    long long  _ordinal;
    NSPresentationIntent * _parentIntent;
    long long  _row;
}

@property (readonly) long long column;
@property (readonly) NSArray *columnAlignments;
@property (readonly) long long columnCount;
@property (readonly) long long headerLevel;
@property (readonly) long long identity;
@property (readonly) long long indentationLevel;
@property (readonly) long long intentKind;
@property (readonly, copy) NSString *languageHint;
@property (readonly) long long ordinal;
@property (readonly) NSPresentationIntent *parentIntent;
@property (readonly) long long row;

+ (id)blockQuoteIntentWithIdentity:(long long)arg1 nestedInsideIntent:(id)arg2;
+ (id)codeBlockIntentWithIdentity:(long long)arg1 languageHint:(id)arg2 nestedInsideIntent:(id)arg3;
+ (id)headerIntentWithIdentity:(long long)arg1 level:(long long)arg2 nestedInsideIntent:(id)arg3;
+ (id)listItemIntentWithIdentity:(long long)arg1 ordinal:(long long)arg2 nestedInsideIntent:(id)arg3;
+ (id)orderedListIntentWithIdentity:(long long)arg1 nestedInsideIntent:(id)arg2;
+ (id)paragraphIntentWithIdentity:(long long)arg1 nestedInsideIntent:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)tableCellIntentWithIdentity:(long long)arg1 column:(long long)arg2 nestedInsideIntent:(id)arg3;
+ (id)tableHeaderRowIntentWithIdentity:(long long)arg1 nestedInsideIntent:(id)arg2;
+ (id)tableIntentWithIdentity:(long long)arg1 columnCount:(long long)arg2 alignments:(id)arg3 nestedInsideIntent:(id)arg4;
+ (id)tableRowIntentWithIdentity:(long long)arg1 row:(long long)arg2 nestedInsideIntent:(id)arg3;
+ (id)thematicBreakIntentWithIdentity:(long long)arg1 nestedInsideIntent:(id)arg2;
+ (id)unorderedListIntentWithIdentity:(long long)arg1 nestedInsideIntent:(id)arg2;

- (id)_init;
- (long long)column;
- (id)columnAlignments;
- (long long)columnCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)headerLevel;
- (long long)identity;
- (long long)indentationLevel;
- (id)initWithCoder:(id)arg1;
- (long long)intentKind;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToPresentationIntent:(id)arg1;
- (id)languageHint;
- (long long)ordinal;
- (id)parentIntent;
- (long long)row;

@end
