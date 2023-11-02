
@interface WBTable : NSObject

+ (void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3;
+ (bool)isTableFloating:(const void*)arg1 tracked:(const void*)arg2;
+ (void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3;
+ (void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;
+ (bool)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3;

@end
