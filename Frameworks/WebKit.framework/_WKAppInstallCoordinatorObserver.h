
@interface _WKAppInstallCoordinatorObserver : NSObject <IXAppInstallCoordinatorObserver> {
    struct WeakPtr<WebPushD::ICAppBundle, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _bundle;
}

@property /* Warning: unhandled struct encoding: '{WeakPtr<WebPushD::ICAppBundle' */ struct  bundle; /* unknown property attribute:  WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>>=^{DefaultWeakPtrImpl}}} */
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WeakPtr<WebPushD::ICAppBundle, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl {} *x_1_1_1; } x1; })bundle;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forApplicationRecord:(id)arg2;
- (id)initWithICAppBundle:(void*)arg1;
- (void)setBundle:(struct WeakPtr<WebPushD::ICAppBundle, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl {} *x_1_1_1; } x1; })arg1;

@end
