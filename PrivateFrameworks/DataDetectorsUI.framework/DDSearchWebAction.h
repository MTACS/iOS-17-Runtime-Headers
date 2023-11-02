
@interface DDSearchWebAction : DDOpenURLAction {
    NSString * _query;
}

- (void).cxx_destruct;
- (bool)canBePerformedByOpeningURL;
- (id)iconName;
- (id)initWithQueryString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 context:(id)arg3;
- (id)localizedName;
- (void)performFromView:(id)arg1;

@end
