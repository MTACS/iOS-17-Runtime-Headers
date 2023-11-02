
@interface AXSSDocument : NSObject {
    NSMutableArray * __nodes;
}

@property (nonatomic, retain) NSMutableArray *_nodes;
@property (nonatomic, readonly, copy) NSArray *nodes;

+ (id)documentWithAttributedText:(id)arg1;
+ (id)documentWithText:(id)arg1;

- (void).cxx_destruct;
- (id)_generateAllDocIssues;
- (id)_generateAllWordIssues;
- (id)_nodes;
- (void)addNode:(id)arg1;
- (id)generateAllIssues;
- (id)init;
- (id)nodes;
- (void)set_nodes:(id)arg1;
- (id)stringByAcceptingFirstSuggestionForIssues:(id)arg1;

@end
