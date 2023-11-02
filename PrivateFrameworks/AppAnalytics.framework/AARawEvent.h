
@interface AARawEvent : NSObject {
    void name;
    void properties;
    void sessionGroup;
    void timestampGranularity;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 properties:(id)arg2;
- (id)initWithName:(id)arg1 sessionGroup:(id)arg2 timestampGranularity:(long long)arg3 properties:(id)arg4;

@end
