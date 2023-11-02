
@interface WKPaymentAuthorizationDelegate : NSObject {
    struct RetainPtr<PKShippingMethods> { 
        void *m_ptr; 
    }  _availableShippingMethods;
    struct BlockPtr<void (PKPaymentAuthorizationResult *)>="m_block"@? {}  _didAuthorizePaymentCompletion;
    struct BlockPtr<void (PKPaymentRequestCouponCodeUpdate *)>="m_block"@? {}  _didChangeCouponCodeCompletion;
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)>="m_block"@? {}  _didRequestMerchantSessionCompletion;
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)>="m_block"@? {}  _didSelectPaymentMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)>="m_block"@? {}  _didSelectShippingContactCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)>="m_block"@? {}  _didSelectShippingMethodCompletion;
    struct WeakPtr<WebKit::PaymentAuthorizationPresenter, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _presenter;
    struct RetainPtr<PKPaymentRequest> { 
        void *m_ptr; 
    }  _request;
    struct RetainPtr<NSError> { 
        void *m_ptr; 
    }  _sessionError;
    struct RetainPtr<NSArray<PKPaymentSummaryItem *>> { 
        void *m_ptr; 
    }  _summaryItems;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didAuthorizePayment:(id)arg1 completion:(id /* block */)arg2;
- (void)_didChangeCouponCode:(id)arg1 completion:(id /* block */)arg2;
- (void)_didFinish;
- (void)_didRequestMerchantSession:(id /* block */)arg1;
- (void)_didSelectPaymentMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)_didSelectShippingContact:(id)arg1 completion:(id /* block */)arg2;
- (void)_didSelectShippingMethod:(id)arg1 completion:(id /* block */)arg2;
- (void)_getPaymentServicesMerchantURL:(id /* block */)arg1;
- (id)_initWithRequest:(id)arg1 presenter:(void*)arg2;
- (void)_willFinishWithError:(id)arg1;
- (void)completeCouponCodeChange:(id)arg1;
- (void)completeMerchantValidation:(id)arg1 error:(id)arg2;
- (void)completePaymentMethodSelection:(id)arg1;
- (void)completePaymentSession:(long long)arg1 errors:(id)arg2;
- (void)completePaymentSession:(long long)arg1 errors:(id)arg2 orderDetails:(id)arg3;
- (void)completeShippingContactSelection:(id)arg1;
- (void)completeShippingMethodSelection:(id)arg1;
- (void)invalidate;

@end
