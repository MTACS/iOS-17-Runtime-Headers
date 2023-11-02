
@protocol PRPosterContentsInternal <PRPosterContents>

@required

- (PRSPosterPath *)_path;
- (PRPosterConfigurableOptions *)loadConfigurableOptionsWithError:(out id*)arg1;

@end
