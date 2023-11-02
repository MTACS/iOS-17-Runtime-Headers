
@interface CNEmailAddressSanitizationTask : CNTask {
    NSString * _address;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithAddress:(id)arg1;
- (void)removeMailtoPrefix;
- (id)run:(id*)arg1;

@end
