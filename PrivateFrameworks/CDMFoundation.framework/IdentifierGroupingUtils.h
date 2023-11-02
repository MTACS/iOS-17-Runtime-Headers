
@interface IdentifierGroupingUtils : NSObject

+ (id)createIdentifier:(unsigned int)arg1 interpretationGroupIndex:(unsigned int)arg2 nodeIndex:(unsigned int)arg3 spanIdentifier:(id)arg4;
+ (void)createIdentifierGroups:(id)arg1 alignmentSpanDict:(id)arg2 identifiers:(id)arg3 nodeIndex:(unsigned int)arg4 interpretationGroupCurrentMax:(id)arg5 tagSpans:(id)arg6;
+ (void)createNonOverlapping:(id)arg1 interpretationGroup:(id)arg2 start:(unsigned long long)arg3 interpretationGroups:(id)arg4;
+ (id)getInterpretationGroupMax:(id)arg1;
+ (id)getInterpretationGroups:(id)arg1;
+ (id)getTokenIndexIdentifier:(unsigned int)arg1 interpretationGroup:(unsigned int)arg2 nodeIndex:(unsigned int)arg3 span:(id)arg4 spanIdentifier:(id)arg5;
+ (id)limitAlignments:(id)arg1 alignmentSpanDict:(id)arg2;
+ (void)sortAlignmentDict:(id)arg1 orderedIndexes:(id)arg2 alignmentSpanDict:(id)arg3;

@end
