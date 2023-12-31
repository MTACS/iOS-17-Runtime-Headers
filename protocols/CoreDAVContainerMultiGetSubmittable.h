
@protocol CoreDAVContainerMultiGetSubmittable <CoreDAVSubmittable>

@required

- (NSSet *)deletedURLs;
- (NSSet *)missingURLs;
- (NSSet *)parsedContents;
- (void)setShouldIgnoreResponseErrors:(bool)arg1;
- (bool)shouldIgnoreResponseErrors;

@end
