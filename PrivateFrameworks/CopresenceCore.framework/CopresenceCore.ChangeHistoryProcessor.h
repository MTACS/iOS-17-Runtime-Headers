
@interface CopresenceCore.ChangeHistoryProcessor : NSObject <CNChangeHistoryEventVisitor> {
    void onContactDeleted;
}

- (void).cxx_destruct;
- (id)init;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
