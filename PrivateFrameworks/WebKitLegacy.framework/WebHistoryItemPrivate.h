
@interface WebHistoryItemPrivate : NSObject {
    struct RefPtr<WebCore::HistoryItem, WTF::RawPtrTraits<WebCore::HistoryItem>, WTF::DefaultRefDerefTraits<WebCore::HistoryItem>> { 
        struct HistoryItem {} *m_ptr; 
    }  _historyItem;
    double  _lastVisitedTime;
    struct unique_ptr<WTF::Vector<WTF::String>, std::default_delete<WTF::Vector<WTF::String>>> { 
        struct __compressed_pair<WTF::Vector<WTF::String> *, std::default_delete<WTF::Vector<WTF::String>>> { 
            void *__value_; 
        } __ptr_; 
    }  _redirectURLs;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
