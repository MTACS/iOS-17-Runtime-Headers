
@interface HSContainersResponse : HSResponse {
    NSArray * _containers;
}

@property (nonatomic, copy) NSArray *containers;

- (void).cxx_destruct;
- (id)containers;
- (void)setContainers:(id)arg1;

@end
