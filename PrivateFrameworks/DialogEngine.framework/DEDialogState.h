
@interface DEDialogState : NSObject {
    NSString * _catId;
}

@property (retain) NSString *catId;

- (void).cxx_destruct;
- (id)catId;
- (struct DialogStateFamily { struct CountAndTimestamp { unsigned long long x_1_1_1; double x_1_1_2; } x1; })getFamily;
- (struct DialogStateUseCase { struct CountAndTimestamp { unsigned long long x_1_1_1; double x_1_1_2; } x1; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *x_1_2_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *x_1_2_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; })getUseCase;
- (id)initWithCatId:(id)arg1;
- (void)setCatId:(id)arg1;

@end
