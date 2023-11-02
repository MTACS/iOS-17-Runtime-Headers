
@interface LWCRFact : NSObject {
    NSData * dataFactStorage;
    struct Fact { 
        unsigned int type; 
        struct { 
            char *data; 
            unsigned long long length; 
        } name; 
        union { 
            long long integer; 
            struct { 
                char *data; 
                unsigned long long length; 
            } string; 
            struct CEQueryContext {} *queryContext; 
        } value; 
    }  fact;
    NSString * stringFactStorage;
}

+ (id)dataFact:(id)arg1;
+ (id)entitlementsFact:(id)arg1;
+ (id)integerFact:(id)arg1;
+ (id)stringFact:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bindName:(id)arg1;
- (void)dealloc;

@end
