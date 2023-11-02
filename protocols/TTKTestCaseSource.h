
@protocol TTKTestCaseSource <NSObject, NSFastEnumeration>

@required

- (float)fileVersion;
- (TTKTestCase *)getNextTestCase;
- (NSString *)inputMode;
- (NSDictionary *)layouts;
- (int)majorVersion;
- (int)minorVersion;
- (id /* block */)onNewLayoutsFound:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSDictionary *, void*, id, SEL
- (void)reset;
- (void)setOnNewLayoutsFound:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
