
@protocol _INPBSetTaskAttributeIntentResponse <NSObject>

@required

- (int)StringAsWarnings:(NSString *)arg1;
- (void)addWarnings:(int)arg1;
- (void)clearWarnings;
- (bool)hasModifiedTask;
- (_INPBTask *)modifiedTask;
- (void)setModifiedTask:(_INPBTask *)arg1;
- (void)setWarnings:(int*)arg1 count:(unsigned long long)arg2;
- (int*)warnings;
- (NSString *)warningsAsString:(int)arg1;
- (int)warningsAtIndex:(unsigned long long)arg1;
- (unsigned long long)warningsCount;

@end
