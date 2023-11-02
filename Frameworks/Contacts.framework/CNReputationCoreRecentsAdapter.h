
@interface CNReputationCoreRecentsAdapter : NSObject {
    CRRecentContactsLibrary * _library;
}

@property (nonatomic, readonly) CRRecentContactsLibrary *library;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRecentContactsLibrary:(id)arg1;
- (id)library;
- (id)recentContactsForHandle:(id)arg1;

@end
