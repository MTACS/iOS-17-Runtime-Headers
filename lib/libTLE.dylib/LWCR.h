
@interface LWCR : NSObject {
    NSDictionary * _dictionary;
    struct CEQueryContext { struct der_vm_context { struct CERuntime {} *x_1_1_1; struct CEAccelerationContext { struct CEAccelerationElement {} *x_2_2_1; unsigned long long x_2_2_2; } x_1_1_2; unsigned long long x_1_1_3; bool x_1_1_4; bool x_1_1_5; union { struct ccder_read_blob { char *x_1_3_1; char *x_1_3_2; } x_6_2_1; struct { char *x_2_3_1; char *x_2_3_2; } x_6_2_2; } x_1_1_6; } x1; bool x2; } * backingContext;
    NSData * backingStorage;
    struct LWCR { 
        long long _version; 
        long long _compatVersion; 
        long long _constraintCat; 
        struct CEQueryContext { 
            struct der_vm_context { 
                struct CERuntime {} *runtime; 
                struct CEAccelerationContext { 
                    struct CEAccelerationElement {} *index; 
                    unsigned long long index_count; 
                } lookup; 
                unsigned long long dictionary_tag; 
                bool sorted; 
                bool valid; 
                union { 
                    struct ccder_read_blob { 
                        char *der; 
                        char *der_end; 
                    } ccstate; 
                    struct { 
                        char *der_start; 
                        char *der_end; 
                    } state; 
                } ; 
            } der_context; 
            bool managed; 
        } ctx; 
    }  lwcr;
}

@property (readonly) long long constraintCategory;
@property (readonly) NSDictionary *dictionary;
@property (readonly) bool hasRequirements;
@property (readonly) long long version;

+ (id)withData:(id)arg1 withError:(id*)arg2;
+ (id)withVersion:(long long)arg1 withConstraintCategory:(long long)arg2 withRequirements:(id)arg3 withError:(id*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)constraintCategory;
- (void)dealloc;
- (id)dictionary;
- (id)externalRepresentation;
- (bool)hasRequirements;
- (id)init;
- (long long)version;

@end
