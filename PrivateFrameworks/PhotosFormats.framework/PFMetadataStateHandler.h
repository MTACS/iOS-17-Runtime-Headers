
@interface PFMetadataStateHandler : NSObject {
    NSMutableArray * _breadcrumbs;
    PFMetadataMovie * _metadata;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _stateHandle;
}

+ (id)redactedDescriptionForFileURL:(id)arg1;
+ (id)redactedDescriptionForPath:(id)arg1;

- (void).cxx_destruct;
- (void)_addBreadcrumbWithTimeInterval:(double)arg1 message:(id)arg2;
- (id)_stateInformation;
- (void)addBreadcrumb:(id)arg1;
- (id)className;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)stateDataWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;

@end
