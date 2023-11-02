
@interface FIDSNode : FINode {
    struct TPrivateNodeInstantiationEnabler { 
        struct shared_ptr<TFSVolumeInfo> { 
            struct TFSVolumeInfo {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } fVolumeInfoPtr; 
        struct shared_ptr<TFSInfo> { 
            struct TFSInfo {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } fFSInfo; 
        struct TNodePtr { 
            FINode *fFINode; 
        } fAliasTarget; 
        struct unique_ptr<TOperationLock, std::default_delete<TOperationLock>> { 
            struct __compressed_pair<TOperationLock *, std::default_delete<TOperationLock>> { 
                struct TOperationLock {} *__value_; 
            } __ptr_; 
        } fOperationLock; 
        struct TNode {} *fParent; 
        struct unique_ptr<TChildrenList, std::default_delete<TChildrenList>> { 
            struct __compressed_pair<TChildrenList *, std::default_delete<TChildrenList>> { 
                struct TChildrenList {} *__value_; 
            } __ptr_; 
        } fChildrenList; 
        void *fCustomNode; 
        struct unique_ptr<TNotifierList, std::default_delete<TNotifierList>> { 
            struct __compressed_pair<TNotifierList *, std::default_delete<TNotifierList>> { 
                struct TNotifierList {} *__value_; 
            } __ptr_; 
        } fNotifierList; 
        unsigned char fFlags; 
        unsigned int fSyncMark : 1; 
        unsigned int fIsRegisteredForProgress : 1; 
        unsigned int fSyncUbiquityAttrs : 1; 
        unsigned int fPrefetchPropertiesOnSync : 1; 
        unsigned int fSyncWithLSProperties : 1; 
    }  _node;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)asTNode;
- (void)dealloc;
- (void)dispatchEvent:(id)arg1 forObserver:(id)arg2;
- (id)iteratorIncludingInvisibleItems:(bool)arg1 synchronous:(bool)arg2;
- (id)nodesToObserve;
- (void)synchronizeChildren:(unsigned int)arg1 events:(void*)arg2;

@end
