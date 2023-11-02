
@interface NUPaywallGroupData : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  groupData;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithGroupType:(long long)arg1 groupID:(id)arg2 groupCount:(int)arg3 groupPosition:(int)arg4 groupedArticleIDs:(id)arg5 groupedIssueIDs:(id)arg6;

@end
